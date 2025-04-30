  /*
     project title : inventory management system
     author: Aman Rawat
  */
 #include<iostream>
 // create category class

 // create product class

 //create transaction class

 //create inventorymanagement calss

 //main function 
int main(){
    int choice;

    do{
        std::cout<<"\nInventory Management System\n------------------------\n";
        std::cout<<"\n1. Add Category";
        std::cout<<"\n2. Add Products";
        std::cout<<"\n3. show Category";
        std::cout<<"\n4. show products";
        std::cout<<"\n5. REstock Product";
        std::cout<<"\n6. sell a product";
        std::cout<<"\n7. Show transactions";
        std::cout<<"\n8. exit";

        std::cout<<"\nEnter Your Choice: ";
        if(!(std::cin>>choice)){
            std::cerr<<"\nInvalid Input. Please enter a num between 1 and 8.\n "; 
            std::cin.clear();
        }
    

    switch(choice)
    {
        case 1 : std::cout<<"Adding a category";
        break;
        case 2 : std::cout<<"Adding a product";
        break;
        case 3 : std::cout<<"Show categories";
        break;
        case 4 : std::cout<<"show products";
        break;
        case 5 : std::cout<<"restock products";
        break;
        case 6 : std::cout<<"sell a product";
        break;
        case 7 : std::cout<<"show transactions";
        break;
        default : 
        std::cout<<"thank you";
        break;
        
    }
        
    }while(choice!=8);


}
 //menu using do-while and switch case 