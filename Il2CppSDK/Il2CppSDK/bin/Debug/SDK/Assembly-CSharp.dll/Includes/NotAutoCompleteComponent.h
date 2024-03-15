#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotAutoCompleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotAutoCompleteComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(NotAutoCompleteComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1E9C))(this, target);
	}

};

