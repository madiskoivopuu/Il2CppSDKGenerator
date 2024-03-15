#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldsList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldsList"));
	}

	template <typename R = Il2CppArray<World>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(WorldsList*, Il2CppObject*))(Il2CppBase() + 0x1131564))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WorldsList*, uintptr_t))(Il2CppBase() + 0x11315FC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WorldsList*, uintptr_t))(Il2CppBase() + 0x1131760))(this, writer);
	}

};

