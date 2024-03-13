#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInitilizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInitilizer"));
	}


	template <typename T = void> static T Initilize() {
		return ((T (*)(void *))(Il2CppBase() + 0x10D6D98))(0);
	}

};

