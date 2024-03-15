#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiEvents {

class Event
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiEvents", "Event"));
	}

	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& mName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& mDescription() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& mImageUrl() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uint64_t> R& mCurrentCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::EventVisibility> R& mVisibility() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = Il2CppString*> R get_Id() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE68))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE70))(this);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE78))(this);
	}
	template <typename R = Il2CppString*> R get_ImageUrl() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE80))(this);
	}
	template <typename R = uint64_t> R get_CurrentCount() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE88))(this);
	}
	template <typename R = GooglePlayGamesBasicApiEvents::EventVisibility> R get_Visibility() {
		return ((R (*)(Event*))(Il2CppBase() + 0x137EE90))(this);
	}

};

}
