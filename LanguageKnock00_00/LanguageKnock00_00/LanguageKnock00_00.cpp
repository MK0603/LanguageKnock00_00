// LanguageKnock00_00.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "iostream"


int main()
{
	std::string target = "stressed";
	for(int i = target.size()-1; 0<= i ; i--){
		std::cout << target[i] << std::flush;
	}
    return 0;
}

