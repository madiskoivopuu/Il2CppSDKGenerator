#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotSelectableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotSelectableComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(NotSelectableComponent*, Il2CppObject*))(Il2CppBase() + 0x13B6674))(this, target);
	}

};

