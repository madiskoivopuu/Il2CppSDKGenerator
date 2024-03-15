#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowCountComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ShowCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1633208))(this, target);
	}

};

