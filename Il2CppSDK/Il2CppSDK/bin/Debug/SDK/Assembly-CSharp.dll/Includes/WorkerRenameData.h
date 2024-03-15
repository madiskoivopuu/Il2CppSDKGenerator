#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkerRenameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameData"));
	}

	template <typename R = int32_t> R& FurnitureId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& NewName() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WorkerRenameData*, uintptr_t))(Il2CppBase() + 0x112FD50))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WorkerRenameData*, uintptr_t))(Il2CppBase() + 0x112FDA4))(this, reader);
	}

};

