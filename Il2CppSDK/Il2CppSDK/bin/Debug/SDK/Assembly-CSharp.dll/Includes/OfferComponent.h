#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfferComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfferComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OfferComponent*, Il2CppObject*))(Il2CppBase() + 0x11D6864))(this, target);
	}

};

