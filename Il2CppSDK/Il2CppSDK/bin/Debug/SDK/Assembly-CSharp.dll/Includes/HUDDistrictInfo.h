#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDDistrictInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDistrictInfo"));
	}

	template <typename T = Il2CppString*> static T& DISTRICT_YOUR_TEXT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DISTRICT_POPULAR_TEXT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DISTRICT_OWNER_TEXT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LEVEL_TEXT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _districtRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _districtLevelText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _populationText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _taxText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TextMonoBehaviour*> T& _districtNameText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _districtOwnerText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Nullable1int64_t>*> T& _districtOwnerId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Nullable1int32_t>*> T& _districtLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T UpdateView(AccountEntity* accountEntity, LocationEntity* location) {
		return ((T (*)(HUDDistrictInfo*, AccountEntity*, LocationEntity*))(Il2CppBase() + 0x14516B4))(this, accountEntity, location);
	}

};

