#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowInHUDComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowInHUDComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ShowInHUDComponent*, Il2CppObject*))(Il2CppBase() + 0x147ED38))(this, targetObject);
	}

};

