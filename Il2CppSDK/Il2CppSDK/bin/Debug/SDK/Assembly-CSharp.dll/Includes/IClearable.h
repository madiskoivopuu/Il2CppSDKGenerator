#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClearable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClearable"));
	}


	template <typename T = void> T Clear() {
		return ((T (*)(IClearable*))(Il2CppBase() + 0x0))(this);
	}

};

