#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideToolComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideToolComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(HideToolComponent*, Il2CppObject*))(Il2CppBase() + 0x1C444B4))(this, target);
	}

};
