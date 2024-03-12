#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFakeClanNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFakeClanNameEntity"));
	}


	template <typename T = uintptr_t> T get_fakeClanName() {
		return ((T (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFakeClanName() {
		return ((T (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFakeClanName(Il2CppString* newValue) {
		return ((T (*)(IFakeClanNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceFakeClanName(Il2CppString* newValue) {
		return ((T (*)(IFakeClanNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveFakeClanName() {
		return ((T (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
