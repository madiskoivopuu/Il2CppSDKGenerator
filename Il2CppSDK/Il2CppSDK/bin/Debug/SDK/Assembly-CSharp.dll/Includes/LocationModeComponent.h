#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationModeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationModeComponent"));
	}

	template <typename R = LocationMode> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1<int32_t>*& DifficultyIndex() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x30);
	}
	 Nullable1<int32_t>*& LootIndex() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& PvPName() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationModeComponent*, Il2CppObject*))(Il2CppBase() + 0x17BA6F8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationModeComponent*, uintptr_t))(Il2CppBase() + 0x17BA7D8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationModeComponent*, uintptr_t))(Il2CppBase() + 0x17BA95C))(this, writer);
	}

};

