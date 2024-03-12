#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationRequest"));
	}

	template <typename T = Il2CppString*> T& ClassName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ProgressType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Ids() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DonationRequest*, uintptr_t))(Il2CppBase() + 0x1302A7C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DonationRequest*, uintptr_t))(Il2CppBase() + 0x1302AE0))(this, reader);
	}

};

}
