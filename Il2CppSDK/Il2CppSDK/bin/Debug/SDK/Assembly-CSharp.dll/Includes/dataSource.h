#pragma once
#include <Il2Cpp/Il2Cpp.h>

class dataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "dataSource"));
	}


	template <typename T = Il2CppString*> static T get_MOPUB() {
		return ((T (*)(void *))(Il2CppBase() + 0x1134FB4))(0);
	}

};

