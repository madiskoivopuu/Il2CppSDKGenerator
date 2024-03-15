#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDDistrictInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDistrictInfo"));
	}

	template <typename R = Il2CppString*> static R& DISTRICT_YOUR_TEXT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DISTRICT_POPULAR_TEXT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DISTRICT_OWNER_TEXT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LEVEL_TEXT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _districtRoot() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _districtLevelText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _populationText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _taxText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextMonoBehaviour*> R& _districtNameText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _districtOwnerText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Nullable1int64_t>*& _districtOwnerId() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x48);
	}
	 Nullable1int32_t>*& _districtLevel() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x58);
	}

	template <typename R = bool> R UpdateView(AccountEntity* accountEntity, LocationEntity* location) {
		return ((R (*)(HUDDistrictInfo*, AccountEntity*, LocationEntity*))(Il2CppBase() + 0x14516B4))(this, accountEntity, location);
	}

};

