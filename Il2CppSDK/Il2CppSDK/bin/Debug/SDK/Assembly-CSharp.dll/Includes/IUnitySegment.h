#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnitySegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnitySegment"));
	}


	template <typename T = void> T add_OnSegmentRecieved(void* value) {
		return ((T (*)(IUnitySegment*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSegmentRecieved(void* value) {
		return ((T (*)(IUnitySegment*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
