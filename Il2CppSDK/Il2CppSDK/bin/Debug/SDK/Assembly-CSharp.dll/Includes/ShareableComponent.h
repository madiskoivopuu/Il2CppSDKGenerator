#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareableComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ShareableComponent*, Il2CppObject*))(Il2CppBase() + 0x162FC88))(this, target);
	}

};

