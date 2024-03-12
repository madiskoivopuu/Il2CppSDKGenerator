#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkerUniqueLookupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerUniqueLookupData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& WorkerUniqueLookup() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WorkerUniqueLookupData*, uintptr_t))(Il2CppBase() + 0x1130FA4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WorkerUniqueLookupData*, uintptr_t))(Il2CppBase() + 0x1130FF8))(this, reader);
	}

};

}
