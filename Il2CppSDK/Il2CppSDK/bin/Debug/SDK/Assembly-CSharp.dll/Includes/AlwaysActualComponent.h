#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AlwaysActualComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlwaysActualComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AlwaysActualComponent*, Il2CppObject*))(Il2CppBase() + 0x129E50C))(this, target);
	}

};

