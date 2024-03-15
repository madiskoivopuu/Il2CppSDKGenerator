#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesAchievement"));
	}

	template <typename R = GooglePlayGames::ReportProgress*> R& mProgressCallback() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& mId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& mIsIncremental() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& mCurrentSteps() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& mTotalSteps() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = double> R& mPercentComplete() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& mCompleted() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& mHidden() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = uintptr_t> R& mLastModifiedTime() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& mTitle() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& mRevealedImageUrl() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& mUnlockedImageUrl() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& mImageFetcher() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& mImage() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& mDescription() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uint64_t> R& mPoints() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R ReportProgress(Action1<bool>* callback) {
		return ((R (*)(PlayGamesAchievement*, Action1<bool>*))(Il2CppBase() + 0x16F95DC))(this, callback);
	}
	template <typename R = uintptr_t> R LoadImage() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F9608))(this);
	}
	template <typename R = Il2CppString*> R get_id() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F975C))(this);
	}
	template <typename R = void> R set_id(Il2CppString* value) {
		return ((R (*)(PlayGamesAchievement*, Il2CppString*))(Il2CppBase() + 0x16F9764))(this, value);
	}
	template <typename R = bool> R get_isIncremental() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F976C))(this);
	}
	template <typename R = int32_t> R get_currentSteps() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F9774))(this);
	}
	template <typename R = int32_t> R get_totalSteps() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F977C))(this);
	}
	template <typename R = double> R get_percentCompleted() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F9784))(this);
	}
	template <typename R = void> R set_percentCompleted(double value) {
		return ((R (*)(PlayGamesAchievement*, double))(Il2CppBase() + 0x16F978C))(this, value);
	}
	template <typename R = bool> R get_completed() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F9794))(this);
	}
	template <typename R = bool> R get_hidden() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F979C))(this);
	}
	template <typename R = uintptr_t> R get_lastReportedDate() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97A4))(this);
	}
	template <typename R = Il2CppString*> R get_title() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97AC))(this);
	}
	template <typename R = uintptr_t> R get_image() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97B4))(this);
	}
	template <typename R = Il2CppString*> R get_achievedDescription() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97B8))(this);
	}
	template <typename R = Il2CppString*> R get_unachievedDescription() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97C0))(this);
	}
	template <typename R = int32_t> R get_points() {
		return ((R (*)(PlayGamesAchievement*))(Il2CppBase() + 0x16F97C8))(this);
	}

};

}
