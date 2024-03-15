#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionWorkData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& WorkerUniqueLookup() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& WorkerName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& KillerName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& IsWorkerDead() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ProductionWorkData*, uintptr_t))(Il2CppBase() + 0x16E5160))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ProductionWorkData*, uintptr_t))(Il2CppBase() + 0x16E51E4))(this, reader);
	}

};

