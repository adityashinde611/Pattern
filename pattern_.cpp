#include <iostream>
#include <vector>

using namespace std;

void pattern1(int row){
  for(int i = 0 ; i < row ; i ++){
    for(int j = 0 ; j <= i ; j ++){
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern2(int row){
  for(int i = 0 ; i < row ; i ++){
    for(int j = row - i ; j > 0 ; j --){
      cout << "  ";
    }
    for(int k = 0 ; k <= i ; k ++){
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern3(int row){
  for(int i = 0 ; i < row ; i ++){
    for(int j = row - i ; j > 0 ; j --){
      cout << " ";
    }
    for(int k = 0 ; k <= i ; k ++){
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern4(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++)
    {
      cout << "*";
    }
    cout << endl;
  }

}


void pattern5(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k <= i){
        cout << k ;
      }
      else{
        cout << 2 * i - k ;
      }
    }
    cout << endl;
  }

  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k <= i){
        cout << k ;
      }
      else{
        cout << 2 * i - k ;
      }
    }
    cout << endl;
  }
  
}

void pattern6(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }

    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k <= i){
        cout << (char)(k + 64);
      }
      else{
        cout << (char)(2 * i - k + 64);
      }
    }
    cout << endl;
  }

  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }

    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k <= i){
        cout << (char)(k + 64);
      }
      else{
        cout << (char)(2 * i - k + 64);
      }
    }
    cout << endl;
  }

}

void pattern7(int row){
  for(int i = row ; i >= 1 ; i --){
    for(int j = 1 ; j <= i ; j ++){
      cout << "*";
    }
    cout << endl;
  }

}

void pattern8(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <=row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern9(int row){
  for(int i = row ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern10(int row){
  for(int i = row ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern11(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= i ; j ++){
      cout << "* ";
    }
    cout << endl;
  }

  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= i ; j ++){
      cout << "* ";
    }
    cout << endl;
  }

}

void pattern12(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << "*";
    }
    cout << endl;
  }
  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern13(int row){
  for(int i = row  ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << " *" ;
    }
    cout << endl;
  }
  for(int i = 1  ; i <= row  ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      cout << " *" ;
    }
    cout << endl;
  }
}

void pattern14(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      if(row == i ){
        cout << " *";
      }
      else if(k == 1 || k == i){
        cout << " *";
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void pattern15(int row){
  for(int i = row ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= i ; k ++){
      if(row == i ){
        cout << " *";
      }
      else if(k == 1 || k == i){
        cout << " *";
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void pattern16(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k == 1 || k == 2 * i - 1){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int k = 1 ; k <= 2 * i - 1 ; k ++){
      if(k == 1 || k == 2 * i - 1){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern17(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= i ; j ++){
      cout <<" " <<j ; 
    }
    cout << endl;
  }
}

void pattern18(int row){
  int count = 1;
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= i ; j ++){
      cout << " " << count ++ ;
    }
    cout << endl;
  }
}

vector <int> Row(int limit){
  long long res = 1;
  vector <int> v;
  v.push_back(res);
  for(int i = 1 ; i < limit ; i ++){
    res = res * (limit - i);
    res = res / i ;
    v.push_back(res);
  }
  return v;
}

void pattern19(int row){
  vector <vector<int>> ans;
  for(int i = 1 ; i <= row ; i ++){
    ans.push_back(Row(i));
  }

  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    vector<int> print = ans[i - 1];
    for(int j = 0 ; j < print.size() ; j ++){
      cout << " " << print[j];
    }
    cout << endl;
  }

}

void pattern20(int row){
  for(int i = 1 ; i <= row ; i ++){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int j = 1 ; j <= 2 * i - 1 ; j ++){
      if(i >= j){
        cout << i - j + 1;
      }
      else{
        cout << j - i + 1;
      }
    }
    cout << endl;
  }
  for(int i = row - 1 ; i >= 1 ; i --){
    for(int j = 1 ; j <= row - i ; j ++){
      cout << " ";
    }
    for(int j = 1 ; j <= 2 * i - 1 ; j ++){
      if(i >= j){
        cout << i - j + 1;
      }
      else{
        cout << j - i + 1;
      }
    }
    cout << endl;
  }
}

int main(){
  int row = 0;
  cout << "Enter the row needed in pattern" << endl;
  cin >> row;

  pattern1(row);
  pattern2(row);
  pattern3(row);
  pattern4(row);
  pattern5(row);
  pattern6(row);
  pattern7(row);
  pattern8(row);
  pattern9(row);
  pattern10(row);
  pattern11(row);
  pattern12(row);
  pattern13(row);
  pattern14(row);
  pattern15(row);
  pattern16(row);
  pattern17(row);
  pattern18(row);
  pattern19(row);
  pattern20(row);

  return 0;
}