#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioManager"));
	}

	template <typename R = uintptr_t> R& mixer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _initialized() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& loggingEnabled() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = uintptr_t> R& musicSource() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = AudioManager*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, AudioTheme*>*& themes() {
		return *(Il2CppDictionary<Il2CppString*, AudioTheme*>**)((uintptr_t)this + 0x30);
	}
	 Il2CppList<LoopSoundContainer*>*& loopSounds() {
		return *(Il2CppList<LoopSoundContainer*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = AudioTheme*> R& currentTheme() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = AudioTrack*> R& currentTrack() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppList<uintptr_t>*& soundSources() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x50);
	}
	 Il2CppList<KeyValuePair2<uintptr_t, float>*>*& fadingSoundSources() {
		return *(Il2CppList<KeyValuePair2<uintptr_t, float>*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& lastAudioSourceIndex() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& musicFadingOut() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = bool> R& musicFadingIn() {
		return *(R*)((uintptr_t)this + 0x65);
	}
	template <typename R = Il2CppString*> R& currentMainTheme() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& playingMainMusicTheme() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Parameters> R& defaultParameters() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& currentSnapshot() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _listener() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& sounds() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0xC0);
	}
	template <typename R = uint32_t> R& keyCounter() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	 Il2CppDictionary<uint32_t, int32_t>*& activeSounds() {
		return *(Il2CppDictionary<uint32_t, int32_t>**)((uintptr_t)this + 0xD0);
	}
	 Il2CppList<LoopSoundContainer*>*& _loopsToPlay() {
		return *(Il2CppList<LoopSoundContainer*>**)((uintptr_t)this + 0xD8);
	}
	 Il2CppList<LoopSoundContainer*>*& _loopsToRemove() {
		return *(Il2CppList<LoopSoundContainer*>**)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> static R& LoopsToPlay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = LoopSoundContainer*> R& MaxDistanceLoop() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = LoopSoundComparer*> R& _loopSoundComparer() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = bool> R& AllThemesPreloaded() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& audioMixerGroups() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x100);
	}
	 Il2CppList<uintptr_t>*& ambientSources() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x108);
	}
	 Il2CppDictionary<Il2CppString*, AmbientSource*>*& currentAmbientSources() {
		return *(Il2CppDictionary<Il2CppString*, AmbientSource*>**)((uintptr_t)this + 0x110);
	}
	 Il2CppDictionary<Il2CppString*, AmbientSource*>*& fadingInAmbientSources() {
		return *(Il2CppDictionary<Il2CppString*, AmbientSource*>**)((uintptr_t)this + 0x118);
	}
	 Il2CppDictionary<Il2CppString*, AmbientSource*>*& fadingOutAmbientSources() {
		return *(Il2CppDictionary<Il2CppString*, AmbientSource*>**)((uintptr_t)this + 0x120);
	}

	template <typename R = Il2CppString*> R get_CurrentMainTheme() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5D14C))(this);
	}
	template <typename R = uintptr_t> R get_Listener() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5D154))(this);
	}
	template <typename R = AudioManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A5BA34))(0);
	}
	template <typename R = AudioManager*> static R get_FastInstance() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A5D248))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5D294))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5D7FC))(this);
	}
	template <typename R = void> R SetMainTheme(Il2CppString* themeId) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A5E8D0))(this, themeId);
	}
	template <typename R = void> R PlayNextTrack() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5EA54))(this);
	}
	template <typename R = void> R UpdateMusic() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5D83C))(this);
	}
	template <typename R = void> R UpdateSound() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5DAC0))(this);
	}
	template <typename R = void> R UpdateFading() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5DE1C))(this);
	}
	template <typename R = void> R Init(float preloadTimeLimit) {
		return ((R (*)(AudioManager*, float))(Il2CppBase() + 0x1A5D53C))(this, preloadTimeLimit);
	}
	template <typename R = bool> R get_AllThemesPreloaded() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A6017C))(this);
	}
	template <typename R = void> R set_AllThemesPreloaded(bool value) {
		return ((R (*)(AudioManager*, bool))(Il2CppBase() + 0x1A60184))(this, value);
	}
	template <typename R = uintptr_t> R PreloadThemes(float preloadTimeLimit) {
		return ((R (*)(AudioManager*, float))(Il2CppBase() + 0x1A5FD78))(this, preloadTimeLimit);
	}
	template <typename R = float> static R ToDecibel(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1A60190))(0, value);
	}
	template <typename R = void> R OnMusicSettingsChange(Il2CppObject* sender, float value) {
		return ((R (*)(AudioManager*, Il2CppObject*, float))(Il2CppBase() + 0x1A601B8))(this, sender, value);
	}
	template <typename R = void> R OnSoundSettingsChange(Il2CppObject* sender, float value) {
		return ((R (*)(AudioManager*, Il2CppObject*, float))(Il2CppBase() + 0x1A60240))(this, sender, value);
	}
	template <typename R = void> R CreateSoundPool() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5FE00))(this);
	}
	template <typename R = LoopSoundContainer*> R LoopSound(Il2CppString* sound, uintptr_t parentTransform, Il2CppString* tag) {
		return ((R (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A5C238))(this, sound, parentTransform, tag);
	}
	template <typename R = bool> R StopLoop(GameEntity* entity) {
		return ((R (*)(AudioManager*, GameEntity*))(Il2CppBase() + 0x1A5C6B8))(this, entity);
	}
	template <typename R = bool> R StopLoop_1(LoopSoundContainer* loopSound) {
		return ((R (*)(AudioManager*, LoopSoundContainer*))(Il2CppBase() + 0x1A5C344))(this, loopSound);
	}
	template <typename R = void> R StopAllSounds() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A60318))(this);
	}
	template <typename R = void> R PauseAllSounds() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A603DC))(this);
	}
	template <typename R = void> R ResumeAllSounds() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A6047C))(this);
	}
	template <typename R = uintptr_t> R GetAudioMixerGroup(Il2CppString* name) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A6051C))(this, name);
	}
	template <typename R = uintptr_t> R SetupAudioSource(uintptr_t audioSource, Il2CppString* sound, bool playOnAwake, bool renameGO) {
		return ((R (*)(AudioManager*, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x1A5EEC0))(this, audioSource, sound, playOnAwake, renameGO);
	}
	template <typename R = void> R PlaySound(Il2CppString* sound, Il2CppString* tag) {
		return ((R (*)(AudioManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A5BB0C))(this, sound, tag);
	}
	template <typename R = float> R PlaySound_1(Il2CppString* sound, uintptr_t position, Il2CppString* tag) {
		return ((R (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A5C094))(this, sound, position, tag);
	}
	template <typename R = bool> R ExistInFadingSoundSources(uintptr_t audioSource) {
		return ((R (*)(AudioManager*, uintptr_t))(Il2CppBase() + 0x1A609B8))(this, audioSource);
	}
	template <typename R = float> R PlaySound_2(Il2CppString* sound, uintptr_t position, Il2CppString* tag, uintptr_t* id) {
		return ((R (*)(AudioManager*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1A608A8))(this, sound, position, tag, id);
	}
	template <typename R = float> R PlaySound_3(Il2CppString* sound, uintptr_t position, uintptr_t* id) {
		return ((R (*)(AudioManager*, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1A5F2C4))(this, sound, position, id);
	}
	template <typename R = void> R StopSound(uint32_t id) {
		return ((R (*)(AudioManager*, uint32_t))(Il2CppBase() + 0x1A5FA28))(this, id);
	}
	template <typename R = bool> R IsPlaying(uint32_t id) {
		return ((R (*)(AudioManager*, uint32_t))(Il2CppBase() + 0x1A5F1C0))(this, id);
	}
	template <typename R = void> R UpdateSoundPosition(uintptr_t position, uint32_t id) {
		return ((R (*)(AudioManager*, uintptr_t, uint32_t))(Il2CppBase() + 0x1A5F908))(this, position, id);
	}
	template <typename R = uintptr_t> R GetAudioClip(Il2CppString* trackName) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A5ED68))(this, trackName);
	}
	template <typename R = uintptr_t> R GetAudioClipFromAssetBundles(Il2CppString* trackName) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60AB8))(this, trackName);
	}
	template <typename R = uintptr_t> R GetAudioClipFromStreamingAssets(Il2CppString* trackName) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60C24))(this, trackName);
	}
	template <typename R = void> R TransitionToSnapshots(Il2CppString* name) {
		return ((R (*)(AudioManager*, Il2CppString*))(Il2CppBase() + 0x1A60C2C))(this, name);
	}
	template <typename R = void> R TransitionToSnapshots_1(Il2CppString* name, float time) {
		return ((R (*)(AudioManager*, Il2CppString*, float))(Il2CppBase() + 0x1A60C34))(this, name, time);
	}
	template <typename R = void> R AddAmbientThemes(IEnumerable1<Il2CppString*>* themeNames) {
		return ((R (*)(AudioManager*, IEnumerable1<Il2CppString*>*))(Il2CppBase() + 0x1A60D90))(this, themeNames);
	}
	template <typename R = void> R RemoveAmbientThemes(IEnumerable1<Il2CppString*>* themeNames) {
		return ((R (*)(AudioManager*, IEnumerable1<Il2CppString*>*))(Il2CppBase() + 0x1A61420))(this, themeNames);
	}
	template <typename R = void> R UpdateAmbient() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A5DF80))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(AudioManager*))(Il2CppBase() + 0x1A618C0))(this);
	}

};

