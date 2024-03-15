#pragma once
#include <Il2Cpp/Il2Cpp.h>

class dataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "dataSource"));
	}


	template <typename R = Il2CppString*> static R get_MOPUB() {
		return ((R (*)(void *))(Il2CppBase() + 0x1134FB4))(0);
	}

};

