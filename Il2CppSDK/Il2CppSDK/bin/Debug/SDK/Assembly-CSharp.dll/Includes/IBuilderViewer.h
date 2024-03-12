#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuilderViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuilderViewer"));
	}


	template <typename T = uintptr_t> T get_BuilderMode() {
		return ((T (*)(IBuilderViewer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(IBuilderViewer*, bool))(Il2CppBase() + 0x0))(this, visible);
	}

};

}
