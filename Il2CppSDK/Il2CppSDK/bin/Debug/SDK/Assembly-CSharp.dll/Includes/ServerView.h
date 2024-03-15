#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerLevel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OpenDate() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Population() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Status() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& StatusImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& SelectButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& PopulationIconLow() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& PopulationIconMedium() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& PopulationIconHigh() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ServerInfoContext*> R& _context() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& _subregionName() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> static R& kLowLimit() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& kMediumLimit() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Init(ServerInfoContext* context, Il2CppString* subregionName) {
		return ((R (*)(ServerView*, ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x1622C14))(this, context, subregionName);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ServerView*))(Il2CppBase() + 0x16237B0))(this);
	}
	template <typename R = void> R OnSelectButtonClick() {
		return ((R (*)(ServerView*))(Il2CppBase() + 0x16235B0))(this);
	}

};

