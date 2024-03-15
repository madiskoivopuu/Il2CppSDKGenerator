#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFakeClanNameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFakeClanNameEntity"));
	}


	template <typename R = FakeClanNameComponent*> R get_fakeClanName() {
		return ((R (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFakeClanName() {
		return ((R (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFakeClanName(Il2CppString* newValue) {
		return ((R (*)(IFakeClanNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceFakeClanName(Il2CppString* newValue) {
		return ((R (*)(IFakeClanNameEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveFakeClanName() {
		return ((R (*)(IFakeClanNameEntity*))(Il2CppBase() + 0x0))(this);
	}

};

