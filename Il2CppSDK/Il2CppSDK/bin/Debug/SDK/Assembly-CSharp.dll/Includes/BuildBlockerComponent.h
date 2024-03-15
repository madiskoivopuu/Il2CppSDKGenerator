#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildBlockerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildBlockerComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BuildBlockerComponent*, Il2CppObject*))(Il2CppBase() + 0x15A4188))(this, target);
	}

};

