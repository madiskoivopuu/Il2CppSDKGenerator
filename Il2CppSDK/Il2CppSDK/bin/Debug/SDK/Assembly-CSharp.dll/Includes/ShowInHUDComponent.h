#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowInHUDComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowInHUDComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ShowInHUDComponent*, Il2CppObject*))(Il2CppBase() + 0x147ED38))(this, targetObject);
	}

};

