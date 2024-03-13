#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ParentId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1int64_t>*> T& Signature() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Nullable1float>*> T& DurabilityCoef() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InventoryData*, uintptr_t))(Il2CppBase() + 0x14717F0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(InventoryData*, uintptr_t, bool))(Il2CppBase() + 0x14718A4))(this, reader, checkAvailableBytes);
	}

};

