 import java.util.*;  


   interface StackMethods
	{	
		void push(int item);
		int pop();
	}
	
	class Fixedstack implements StackMethods
	{	int stack[];
		int top;
		int i;
		Fixedstack(int s)
		{	
			stack=new int[s];
			top=-1;
		}
		public void push(int item)
		{	
			if(top==stack.length-1)
				System.out.println("Stack Overflow");
			
			else
				stack[++top]=item;	
		}
		public int pop()
		{	int x=0;
			if(top==-1)
				System.out.println("No item to be deleted. Stack empty");
			else
			{
				x=stack[top];
				top--;
				
			}
			return x;
		}
		public void display()
		{	
			for(i=top; i>=0; i--)
			{
				System.out.println(stack[i]);
			}
		
		}
	
	}
	
	class Dynstack implements StackMethods
	{	
		int top;
		int stack[], temp[];
		Dynstack(int s)
		{
			top=-1;
			stack= new int[s];
		}	
		public void push(int item)
		{	
			if(top==(stack.length-1))
			{	
				temp= new int[stack.length*2];
				for(int i=0; i<stack.length; i++)
				{
					temp[i]=stack[i];
				}
				//stack.length=2*stack.length;
				
				
				stack=temp;	
			}
			
			stack[++top]=item;
			
			
		}
		public int pop()
		{	int x=0;
			if(top==-1)
				System.out.println("No item to be deleted. Stack empty");
			else
			{	
				 x=stack[top];
				top--;
				
			}
			return x;
		}
	    public void display()
		{	
			for(int i=top; i>=0; i--)
			{
				
				System.out.println(stack[i]);
				System.out.println();
			}
		
		}
	
	
	}
	
	class Demo
	{	
		public static void main(String args[])
	{
		Fixedstack ob1=new Fixedstack(10);
		Dynstack ob2= new Dynstack(3);
		
		while(true)
		{	System.out.println("Press 1 to push");
			System.out.println("Press 2 to pop");
			System.out.println("Press 3 to display");
			System.out.println("Press 4 to exit");
			System.out.println("Enter your choice");
			Scanner sc=new Scanner(System.in);
			int ch=sc.nextInt();
			switch(ch)
			{	
				case 1: System.out.println("Enter Item");
						int item= sc.nextInt();
						ob2.push(item);
		                break;
				case 2: int x=ob2.pop();
						System.out.println("The deleted item is" +x);
						break;
				case 3: ob2.display();
						break;
				case 4: System.exit(0)	;
			
			
			}
		
		
		
		}
	}
	
	
	}