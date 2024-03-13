#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICopyTo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICopyTo"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ICopyTo*, Il2CppObject*))(Il2CppBase() + 0x0))(this, target);
	}

};

