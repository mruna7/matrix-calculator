 #include<conio.h>
 #include<iostream.h>
 #define s 20
 #include<process.h>
  class matrix
   {  public:
     float a[s][s],x,y;
     void geta();
     void get();
     void put();
     void putm(int,int);
     matrix mul();
     matrix divide();
     matrix operator+(matrix);
     matrix operator-(matrix);
     matrix operator*(matrix);
     matrix transpose();
     int check(matrix);
   };
      matrix matrix ::mul()
      {            matrix t;
		    int r;
		    t.x=x;
		    t.y=y;
		    cout<<"\nEnter the number to multiply";
		    cin>>r;
		    for(int i=0;i<x;i++)
		    {for(int j=0;j<y;j++)
			 t.a[i][j]=a[i][j]*r;
		    }
		   return t;
	}
	matrix matrix ::divide()
      {            matrix t;
		  t.x=x;
		  t.y=y;
		    int r;
		    cout<<"\nEnter the number to divide";
		    cin>>r;
		    for(int i=0;i<x;i++)
		    {for(int j=0;j<y;j++)
			 t.a[i][j]=a[i][j]/r;
			 }
			 return t;
      }
      void matrix::geta()
      {  cout<<"\nEnter the number of rows"<<"\n";
			cin>>x;
			cout<<"Enter the number of columns"<<"\n";
			 cin>>y;
			 cout<<x<<"X"<<y<<"\n";
		       cout<<"Enter the elements of  matrix : "<<"\n";
		       for(int i=0;i<x;i++)
			{  for(int j=0;j<y;j++)
			   {
			   cin>>a[i][j];
			    cout<<"  ";
			   }
			  cout<<"\n";
			}
      }
      void matrix::get()
      {
       cout<<"\nEnter the number of rows"<<"\n";
       cin>>x;
	cout<<"Enter the number of columns"<<"\n";
       cin>>y;
       cout<<x<<"X"<<y<<"\n";
       cout<<"Enter the elements  : "<<"\n";
       for(int i=0;i<x;i++)
       {  for(int j=0;j<y;j++)
	 {
	   cin>>a[i][j];
	   cout<<"  ";
	 }
	 cout<<"\n";
       }

      }
      void matrix::put()
	{
	  for(int i=0;i<x;i++)
	  {
	    for(int j=0;j<y;j++)
	    {
	   cout<<a[i][j];
	   cout<<"  " ;
	    }
	   cout<<"\n";
	 }
	}
	void matrix::putm(int m,int n)
	{
	  for(int i=0;i<m;i++)
	  {
	    for(int j=0;j<n;j++)
	    {
	   cout<<a[i][j];
	   cout<<"  " ;
	    }
	   cout<<"\n";
	 }
	}
       matrix matrix ::operator+(matrix b)
       {
	matrix r;

	  r.x=x;
	  r.y=y;

	for(int i=0;i<x;i++)
	{
	 for(int j=0;j<y;j++)
	 r.a[i][j]=a[i][j]+b.a[i][j];
	}
	return r;
       }
	matrix matrix ::operator-(matrix b )
       {
	matrix r;

	  r.x=x;
	  r.y=y;

	for(int i=0;i<x;i++)
	{
	 for(int j=0;j<y;j++)
	 r.a[i][j]=a[i][j]-b.a[i][j];
	}
	return r;
       }
	matrix matrix ::operator*(matrix b)
       {
	 matrix r;
	 for(int i=0;i<x;i++)
	  {
	    for(int j=0;j<y;j++)
	    { r.a[i][j]=0;
	     for(int k=0;k<b.x;k++)
	      r.a[i][j]+=a[i][k]*b.a[k][j];
	    }
	  }
	  return r;
       }
       matrix matrix ::transpose()
	{
	  matrix r;
	  for(int i=0;i<x;i++)
	  {
	     for(int j=0;j<y;j++)
	     r.a[i][j]=a[j][i];
	     r.x=x;
	     r.y=y;

	  }
	  return r;
	}
     int matrix::check(matrix b)
     { 	if((x!=b.x)||(y!=b.y))
	{ cout <<"ERROR:This operation is not possible as the order of both the matrices do not match\n\n";
	   return 1;
	}
	else
	return 0 ;

     }
	 void main()
       {
	clrscr();
	matrix a,b,c;
	for(;;)
	 {
	 int ch;


	cout<<"***********SELECT THE OPERATION************* \n\n\n1.Matrix Addition\n2.Matrix Substraction\n3.Matrix Multiplication\n4.Transpose of a matrix\n5.Multiply matrix by a scalar number\n6.Divide the matrix by a scalar number\n7.exit\nEnter your choice\n";
	 ch=getch();

	 switch(ch)
	  {
	    case '1': int p;
		    cout<<"\n\t\tMatrix Addition\n";
		    cout<<"===Matrix 1===\n";
		    a.get();
		    cout<<"====Matrix 2====\n";
		    b.get();

		    p=a.check(b);
		    if(p==0)
		    { cout<<"\n....Matrix 1....\n"   ;
		     a.put();
		    cout<<"\n   +   \n ";
		    cout<<"\n......Matrix 2....\n";
		    b.put();
		    c=a+b;
		    cout<< "  =  ";
		     cout<<"\n Result:"<<"\n\n";

		    c.put();}

		    break;
	    case '2': cout<<"\n\tMatrix Substraction\n";
		      cout<<"===Matrix 1===\n";
		    a.get();
		    cout<<"====Matrix 2====\n";
		    b.get();

		    p=a.check(b);
		    if(p==0)
		    { cout<<"\n....Matrix 1....\n"   ;
		     a.put();
		    cout<<"\n   +   \n ";
		    cout<<"\n......Matrix 2....\n";
		    b.put();
		    c=a+b;
		    cout<< "  =  ";
		     cout<<"\n Result:"<<"\n\n";

		    c.put();}
		     break;
	    case '3':cout<<"\n\tMatrix Multiplication\n";
		     cout<<"===Matrix 1===\n";
		    a.get();
		    cout<<"====Matrix 2====\n";
		    b.get();
		    if(a.y!=b.x)
		    {cout<<"matrices with this order can't be multiplied";}
		    else
		   { c=a*b;
		      cout<<"\n Result:"<<"\n\n" ;
		     int m= a.x;
		     int n=b.y;
		       c.putm(m,n);}
		    break;
	    case '4':cout<<"\nTranspose of a matrix\n";
		     a.geta();
		     c=a.transpose();
		     c.put();
		     break;
	  case '5':cout<<"\nMultiply matrix by a scalar number";
		    a.geta();
		    c=a.mul();
		    c.put();
		    break;
	   case '6':cout<<"\nDivide matrix by a scalar number";
		    a.geta();
		    c=a.divide();
		    c.put();
		    break;

	    case '7':exit(0);
	   default:  cout<<"Enter valid option\n";
      }

       char c;
      cout<<"\ndo you want to continue?? pressY/N" ;
      cin>>c;
      if(c=='n')
      exit(0);

    }

  }

