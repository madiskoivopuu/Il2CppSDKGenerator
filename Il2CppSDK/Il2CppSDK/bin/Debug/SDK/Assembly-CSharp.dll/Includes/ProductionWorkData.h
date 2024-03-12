#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductionWorkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionWorkData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& WorkerUniqueLookup() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& WorkerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& KillerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsWorkerDead() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ProductionWorkData*, uintptr_t))(Il2CppBase() + 0x16E5160))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ProductionWorkData*, uintptr_t))(Il2CppBase() + 0x16E51E4))(this, reader);
	}

};

}
