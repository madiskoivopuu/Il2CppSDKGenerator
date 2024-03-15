#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationEntityData"));
	}

	template <typename R = bool> R& HasNoId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int64_t> R& ClanId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& OwnerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = EntityBlueprint*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& Rank() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1int64_t>*& EndTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x38);
	}
	 Nullable1int64_t>*& TicksTillReset() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = LocationType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = PortalsInfoData*> R& PortalData() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = GeneratorParams*> R& GeneratorParams() {
		return *(R*)((uintptr_t)this + 0x68);
	}


};

