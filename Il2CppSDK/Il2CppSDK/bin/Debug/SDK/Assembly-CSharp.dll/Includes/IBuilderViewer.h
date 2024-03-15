#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBuilderViewer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBuilderViewer"));
	}


	template <typename R = BuilderMode> R get_BuilderMode() {
		return ((R (*)(IBuilderViewer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetVisible(bool visible) {
		return ((R (*)(IBuilderViewer*, bool))(Il2CppBase() + 0x0))(this, visible);
	}

};

