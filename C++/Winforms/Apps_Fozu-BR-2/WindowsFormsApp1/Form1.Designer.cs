namespace WindowsFormsApp1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.Login = new System.Windows.Forms.Button();
            this.Registr = new System.Windows.Forms.Button();
            this.Username = new System.Windows.Forms.TextBox();
            this.Password = new System.Windows.Forms.TextBox();
            this.OK = new System.Windows.Forms.Button();
            this.TrueVxod = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.Add = new System.Windows.Forms.Button();
            this.Lose = new System.Windows.Forms.Button();
            this.MoneyChange = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.OK2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Login
            // 
            this.Login.Location = new System.Drawing.Point(11, 11);
            this.Login.Margin = new System.Windows.Forms.Padding(2);
            this.Login.Name = "Login";
            this.Login.Size = new System.Drawing.Size(74, 26);
            this.Login.TabIndex = 0;
            this.Login.Text = "Войти";
            this.Login.UseVisualStyleBackColor = true;
            this.Login.Click += new System.EventHandler(this.Login_Click);
            // 
            // Registr
            // 
            this.Registr.Location = new System.Drawing.Point(89, 11);
            this.Registr.Margin = new System.Windows.Forms.Padding(2);
            this.Registr.Name = "Registr";
            this.Registr.Size = new System.Drawing.Size(136, 26);
            this.Registr.TabIndex = 1;
            this.Registr.Text = "Зарегестрироваться";
            this.Registr.UseVisualStyleBackColor = true;
            this.Registr.Click += new System.EventHandler(this.Registr_Click);
            // 
            // Username
            // 
            this.Username.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.Username.Location = new System.Drawing.Point(29, 328);
            this.Username.Margin = new System.Windows.Forms.Padding(2);
            this.Username.Name = "Username";
            this.Username.Size = new System.Drawing.Size(76, 20);
            this.Username.TabIndex = 2;
            this.Username.Text = "Fozu";
            this.Username.Visible = false;
            // 
            // Password
            // 
            this.Password.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.Password.Location = new System.Drawing.Point(149, 328);
            this.Password.Margin = new System.Windows.Forms.Padding(2);
            this.Password.Name = "Password";
            this.Password.Size = new System.Drawing.Size(76, 20);
            this.Password.TabIndex = 3;
            this.Password.Text = "zxc";
            this.Password.Visible = false;
            // 
            // OK
            // 
            this.OK.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.OK.Location = new System.Drawing.Point(250, 328);
            this.OK.Margin = new System.Windows.Forms.Padding(2);
            this.OK.Name = "OK";
            this.OK.Size = new System.Drawing.Size(56, 19);
            this.OK.TabIndex = 4;
            this.OK.Text = "ОК";
            this.OK.UseVisualStyleBackColor = true;
            this.OK.Visible = false;
            this.OK.Click += new System.EventHandler(this.OK_Click);
            // 
            // TrueVxod
            // 
            this.TrueVxod.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.TrueVxod.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.TrueVxod.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.TrueVxod.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.TrueVxod.Location = new System.Drawing.Point(21, 150);
            this.TrueVxod.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.TrueVxod.Name = "TrueVxod";
            this.TrueVxod.Size = new System.Drawing.Size(294, 42);
            this.TrueVxod.TabIndex = 5;
            this.TrueVxod.Text = "Вход выполнен успешно";
            this.TrueVxod.Visible = false;
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(12, 76);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(151, 32);
            this.label1.TabIndex = 6;
            this.label1.Text = "Ваш Баланс:";
            this.label1.Visible = false;
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location = new System.Drawing.Point(178, 76);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(151, 32);
            this.label2.TabIndex = 7;
            this.label2.Text = "10000";
            this.label2.Visible = false;
            // 
            // Add
            // 
            this.Add.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.Add.Location = new System.Drawing.Point(29, 220);
            this.Add.Margin = new System.Windows.Forms.Padding(2);
            this.Add.Name = "Add";
            this.Add.Size = new System.Drawing.Size(56, 19);
            this.Add.TabIndex = 8;
            this.Add.Text = "Add";
            this.Add.UseVisualStyleBackColor = true;
            this.Add.Visible = false;
            this.Add.Click += new System.EventHandler(this.Add_Click);
            // 
            // Lose
            // 
            this.Lose.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.Lose.Location = new System.Drawing.Point(135, 220);
            this.Lose.Margin = new System.Windows.Forms.Padding(2);
            this.Lose.Name = "Lose";
            this.Lose.Size = new System.Drawing.Size(56, 19);
            this.Lose.TabIndex = 9;
            this.Lose.Text = "Reduce";
            this.Lose.UseVisualStyleBackColor = true;
            this.Lose.Visible = false;
            this.Lose.Click += new System.EventHandler(this.Lose_Click);
            // 
            // MoneyChange
            // 
            this.MoneyChange.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.MoneyChange.Location = new System.Drawing.Point(215, 278);
            this.MoneyChange.Margin = new System.Windows.Forms.Padding(2);
            this.MoneyChange.Name = "MoneyChange";
            this.MoneyChange.Size = new System.Drawing.Size(114, 20);
            this.MoneyChange.TabIndex = 10;
            this.MoneyChange.Visible = false;
            // 
            // label3
            // 
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.Location = new System.Drawing.Point(12, 272);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(171, 32);
            this.label3.TabIndex = 11;
            this.label3.Text = "введите число";
            this.label3.Visible = false;
            // 
            // OK2
            // 
            this.OK2.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.OK2.Location = new System.Drawing.Point(356, 279);
            this.OK2.Margin = new System.Windows.Forms.Padding(2);
            this.OK2.Name = "OK2";
            this.OK2.Size = new System.Drawing.Size(56, 19);
            this.OK2.TabIndex = 12;
            this.OK2.Text = "ОК";
            this.OK2.UseVisualStyleBackColor = true;
            this.OK2.Visible = false;
            this.OK2.Click += new System.EventHandler(this.OK2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(474, 485);
            this.Controls.Add(this.OK2);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.MoneyChange);
            this.Controls.Add(this.Lose);
            this.Controls.Add(this.Add);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.TrueVxod);
            this.Controls.Add(this.OK);
            this.Controls.Add(this.Password);
            this.Controls.Add(this.Username);
            this.Controls.Add(this.Registr);
            this.Controls.Add(this.Login);
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Login;
        private System.Windows.Forms.Button Registr;
        private System.Windows.Forms.TextBox Username;
        private System.Windows.Forms.TextBox Password;
        private System.Windows.Forms.Button OK;
        private System.Windows.Forms.Label TrueVxod;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button Add;
        private System.Windows.Forms.Button Lose;
        private System.Windows.Forms.TextBox MoneyChange;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button OK2;
    }
}

