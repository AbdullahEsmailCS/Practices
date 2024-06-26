using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LinkLabel
{
    public partial class Form1 : Form
    {
        private SqlConnection connection;
        private SqlDataAdapter adapter;
        private DataTable dataTable;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            linkLabel1.Text = "abdism.ye@gmail.com";
            BackColor = Color.FromArgb(200, 50, 100);
            BackgroundImage = imageList1.Images[1];
            BackgroundImageLayout = ImageLayout.Stretch;
            this.Cursor = Cursors.PanEast;
            // Set up database connection
            string connectionString = "Server=.; database = CarDB; User Id= sa; password= 12345;";
            connection = new SqlConnection(connectionString);

            // Load data from the Person table into a DataTable
            adapter = new SqlDataAdapter("SELECT Id, Name, IsActive FROM Persons", connection);
            dataTable = new DataTable();
            adapter.Fill(dataTable);

            // Bind the DataTable to a DataGridView control
            dataGridView.DataSource = dataTable;

            // Configure the DataGridView columns
            dataGridView.Columns["Id"].ReadOnly = true;
            dataGridView.Columns["Name"].ReadOnly = true;

            // Add a DataGridViewCheckBoxColumn for the IsActive field
            DataGridViewCheckBoxColumn checkBoxColumn = new DataGridViewCheckBoxColumn();
            checkBoxColumn.DataPropertyName = "IsActive";
            checkBoxColumn.HeaderText = "Active";
            dataGridView.Columns.Add(checkBoxColumn);

            DataGridViewComboBoxColumn comboBoxColumn = new DataGridViewComboBoxColumn();
            //comboBoxColumn.DataPropertyName = "Gender";
            comboBoxColumn.HeaderText = "Gender";
             comboBoxColumn.DataSource = dataTable;
            comboBoxColumn.ValueMember = "Id";
            comboBoxColumn.DisplayMember = "Name";

            // Add the column to the DataGridView
            dataGridView.Columns.Add(comboBoxColumn);


        }

       

        private void btnSave_Click_1(object sender, EventArgs e)
        {
            try
            {
                // Save changes back to the database
                SqlCommandBuilder commandBuilder = new SqlCommandBuilder(adapter);
                adapter.Update(dataTable);

                MessageBox.Show("Changes saved successfully.", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show("Failed to save changes. Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
    }

        //private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        //{
        //    string emailAddress = "abdism.ye@gmail.com";
        //    string subject = "Hello from EmailLinkLabelExample";

        //    // Create a mailto URL with the email address and subject
        //    string mailtoUrl = $"mailto:{emailAddress}?subject={Uri.EscapeDataString(subject)}";

        //    // Open the default email client with a new message
        //    System.Diagnostics.Process.Start(mailtoUrl);
        //}
    }


