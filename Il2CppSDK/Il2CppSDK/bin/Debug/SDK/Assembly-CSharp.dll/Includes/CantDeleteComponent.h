#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CantDeleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CantDeleteComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CantDeleteComponent*, Il2CppObject*))(Il2CppBase() + 0x15B6404))(this, target);
	}

};

