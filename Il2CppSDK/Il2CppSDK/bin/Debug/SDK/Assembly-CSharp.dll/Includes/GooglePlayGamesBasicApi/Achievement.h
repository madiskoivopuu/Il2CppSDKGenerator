#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class Achievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "Achievement"));
	}

	template <typename R = uintptr_t> static R& UnixEpoch() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& mIsIncremental() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& mIsRevealed() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& mIsUnlocked() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = int32_t> R& mCurrentSteps() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& mTotalSteps() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& mDescription() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& mName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& mLastModifiedTime() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uint64_t> R& mPoints() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& mRevealedImageUrl() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& mUnlockedImageUrl() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E6D58))(this);
	}
	template <typename R = bool> R get_IsIncremental() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7108))(this);
	}
	template <typename R = void> R set_IsIncremental(bool value) {
		return ((R (*)(Achievement*, bool))(Il2CppBase() + 0x18E7110))(this, value);
	}
	template <typename R = int32_t> R get_CurrentSteps() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E711C))(this);
	}
	template <typename R = void> R set_CurrentSteps(int32_t value) {
		return ((R (*)(Achievement*, int32_t))(Il2CppBase() + 0x18E7124))(this, value);
	}
	template <typename R = int32_t> R get_TotalSteps() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E712C))(this);
	}
	template <typename R = void> R set_TotalSteps(int32_t value) {
		return ((R (*)(Achievement*, int32_t))(Il2CppBase() + 0x18E7134))(this, value);
	}
	template <typename R = bool> R get_IsUnlocked() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E713C))(this);
	}
	template <typename R = void> R set_IsUnlocked(bool value) {
		return ((R (*)(Achievement*, bool))(Il2CppBase() + 0x18E7144))(this, value);
	}
	template <typename R = bool> R get_IsRevealed() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7150))(this);
	}
	template <typename R = void> R set_IsRevealed(bool value) {
		return ((R (*)(Achievement*, bool))(Il2CppBase() + 0x18E7158))(this, value);
	}
	template <typename R = Il2CppString*> R get_Id() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7164))(this);
	}
	template <typename R = void> R set_Id(Il2CppString* value) {
		return ((R (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x18E716C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7174))(this);
	}
	template <typename R = void> R set_Description(Il2CppString* value) {
		return ((R (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x18E717C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7184))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x18E718C))(this, value);
	}
	template <typename R = uintptr_t> R get_LastModifiedTime() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7194))(this);
	}
	template <typename R = void> R set_LastModifiedTime(uintptr_t value) {
		return ((R (*)(Achievement*, uintptr_t))(Il2CppBase() + 0x18E7220))(this, value);
	}
	template <typename R = uint64_t> R get_Points() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7304))(this);
	}
	template <typename R = void> R set_Points(uint64_t value) {
		return ((R (*)(Achievement*, uint64_t))(Il2CppBase() + 0x18E730C))(this, value);
	}
	template <typename R = Il2CppString*> R get_RevealedImageUrl() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7314))(this);
	}
	template <typename R = void> R set_RevealedImageUrl(Il2CppString* value) {
		return ((R (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x18E731C))(this, value);
	}
	template <typename R = Il2CppString*> R get_UnlockedImageUrl() {
		return ((R (*)(Achievement*))(Il2CppBase() + 0x18E7324))(this);
	}
	template <typename R = void> R set_UnlockedImageUrl(Il2CppString* value) {
		return ((R (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x18E732C))(this, value);
	}

};

}
