#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ParentId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1int64_t>*& Signature() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x28);
	}
	 Nullable1float>*& DurabilityCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InventoryData*, uintptr_t))(Il2CppBase() + 0x14717F0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(InventoryData*, uintptr_t, bool))(Il2CppBase() + 0x14718A4))(this, reader, checkAvailableBytes);
	}

};

