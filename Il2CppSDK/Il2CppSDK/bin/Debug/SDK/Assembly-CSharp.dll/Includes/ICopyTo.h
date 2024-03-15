#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICopyTo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICopyTo"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ICopyTo*, Il2CppObject*))(Il2CppBase() + 0x0))(this, target);
	}

};

