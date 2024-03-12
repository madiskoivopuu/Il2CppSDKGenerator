#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldsList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldsList"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(WorldsList*, uintptr_t))(Il2CppBase() + 0x1131564))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WorldsList*, uintptr_t))(Il2CppBase() + 0x11315FC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WorldsList*, uintptr_t))(Il2CppBase() + 0x1131760))(this, writer);
	}

};

}
