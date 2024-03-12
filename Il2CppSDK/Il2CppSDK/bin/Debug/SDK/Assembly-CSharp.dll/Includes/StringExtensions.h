#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringExtensions"));
	}


	template <typename T = bool> static T ContainsAnyCase(Il2CppString* value, char c) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x169F044))(0, value, c);
	}

};

}
