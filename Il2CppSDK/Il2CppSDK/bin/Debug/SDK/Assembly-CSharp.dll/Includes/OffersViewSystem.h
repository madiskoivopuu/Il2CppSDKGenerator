#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OffersViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OffersViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _activeOffers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _mailWindows() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _checkedMails() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(OffersViewSystem*))(Il2CppBase() + 0x11D8784))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(OffersViewSystem*))(Il2CppBase() + 0x11D8AB0))(this);
	}

};

}
