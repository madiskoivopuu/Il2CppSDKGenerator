#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareableComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ShareableComponent*, Il2CppObject*))(Il2CppBase() + 0x162FC88))(this, target);
	}

};

