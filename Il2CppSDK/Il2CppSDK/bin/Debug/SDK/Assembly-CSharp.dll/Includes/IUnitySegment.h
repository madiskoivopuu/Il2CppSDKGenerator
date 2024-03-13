#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnitySegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnitySegment"));
	}


	template <typename T = void> T add_OnSegmentRecieved(Action1Il2CppString*>* value) {
		return ((T (*)(IUnitySegment*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSegmentRecieved(Action1Il2CppString*>* value) {
		return ((T (*)(IUnitySegment*, Action1Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

