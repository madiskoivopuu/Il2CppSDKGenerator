#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkerRenameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameData"));
	}

	template <typename T = int32_t> T& FurnitureId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& NewName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WorkerRenameData*, uintptr_t))(Il2CppBase() + 0x112FD50))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WorkerRenameData*, uintptr_t))(Il2CppBase() + 0x112FDA4))(this, reader);
	}

};

