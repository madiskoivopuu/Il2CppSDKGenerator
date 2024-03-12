#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiEvents {

class Event
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiEvents", "Event"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mDescription() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mImageUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& mCurrentCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mVisibility() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE68))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE70))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE78))(this);
	}
	template <typename T = Il2CppString*> T get_ImageUrl() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE80))(this);
	}
	template <typename T = uint64_t> T get_CurrentCount() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE88))(this);
	}
	template <typename T = uintptr_t> T get_Visibility() {
		return ((T (*)(Event*))(Il2CppBase() + 0x137EE90))(this);
	}

};

}
