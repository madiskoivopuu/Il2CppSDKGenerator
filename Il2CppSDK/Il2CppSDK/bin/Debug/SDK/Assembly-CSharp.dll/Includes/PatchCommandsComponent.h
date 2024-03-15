#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent1.h" 
#include "PatchCommand.h" 

class PatchCommandsComponent : public TypeListComponent1<PatchCommand>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommandsComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PatchCommandsComponent*, uintptr_t))(Il2CppBase() + 0x11E9914))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PatchCommandsComponent*, uintptr_t))(Il2CppBase() + 0x11E9AA8))(this, writer);
	}

};

